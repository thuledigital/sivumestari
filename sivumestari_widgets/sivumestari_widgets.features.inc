<?php
/**
 * @file
 * sivumestari_widgets.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sivumestari_widgets_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function sivumestari_widgets_views_api() {
  return array("version" => "3.0");
}
