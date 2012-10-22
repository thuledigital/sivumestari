<?php
/**
 * @file
 * sivumestari_wysiwyg_4.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sivumestari_wysiwyg_4_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
