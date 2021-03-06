<?php
/**
 * @file
 * google_store_locator.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function branch_locator_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function branch_locator_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function branch_locator_node_info() {
  $items = array(
    'branch_location' => array(
      'name' => t('Branch Location'),
      'base' => 'node_content',
      'description' => t('This is used to generate location content for the store locator map.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
