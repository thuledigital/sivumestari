<?php

/**
 * @file
 * A panel plugin to provide administrative information about the site's pages and layouts
 */

$plugin = array(
  'title' => t('Default Panels Layouts'),
  'description' => t('This is list of the custom layouts your modules and themes provide.'),
  'content_types' => array('panels_layouts'),
  'category' => t('Admin'),
  'required context' => new ctools_context_required(t('Sivumestari Admin'), 'string'),
  'single' => TRUE,
);

/**
  * Put the output for you pages type in the blocks pages.
  */
function sivumestari_admin_panels_layouts_content_type_render($subtype, $conf, $panel_args, $context) {

  // Find all the Sivumestari layouts
  $layout_options = array();
  foreach(panels_get_layouts() as $layout_option) {
    if ($layout_option['category'] !== 'Sivumestari' && $layout_option['module'] == 'panels' && (empty($layout_option['builder']) || $layout_option['builder'] == FALSE) && !in_array($layout_option['theme'], array('panels_flexible', 'layout_responsive'))) {
      $layout_options[] = array(
        'data' => array(
          theme('image', array('path' => $layout_option['path'] . '/' . $layout_option['icon'])),
          $layout_option['title'],
          $layout_option['category'],
        ),
      );
    }
  }

  // Create the Output
  $pane = new stdClass();
  $pane->title = t('Default Panels Layouts');
  if (!empty($layout_options)) {
    $header = array(array('data' => '', 'style' => 'width: 30px'), t('Title'), t('Category'));
    $pane->content = theme('table', array('header' => $header, 'rows' => $layout_options, 'attributes' => array('class' => array('panels-layouts'))));
  }
  else {
    $pane->content = t('There are no Panels layouts available');
  }
  return $pane;
}
