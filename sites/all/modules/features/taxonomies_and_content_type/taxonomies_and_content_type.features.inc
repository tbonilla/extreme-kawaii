<?php
/**
 * @file
 * taxonomies_and_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function taxonomies_and_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
