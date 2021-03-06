<?php
/**
 * @file
 * sivumestari_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sivumestari_pages_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function sivumestari_pages_node_info() {
  $items = array(
    'sivumestari_page' => array(
      'name' => t('Content Page'),
      'base' => 'node_content',
      'description' => t('An important page to display to users on your site.'),
      'has_title' => '1',
      'title_label' => t('Otsikko'),
      'help' => '',
    ),
  );
  return $items;
}
