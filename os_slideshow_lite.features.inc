<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function os_slideshow_lite_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function os_slideshow_lite_imagecache_default_presets() {
  $items = array(
    'slideshow' => array(
      'presetname' => 'slideshow',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '175',
            'height' => '',
            'upscale' => 1,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function os_slideshow_lite_node_info() {
  $items = array(
    'slideshow' => array(
      'name' => t('Slideshow'),
      'module' => 'features',
      'description' => t('Each slideshow node contains a list of images that define a simple images-only slideshow.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function os_slideshow_lite_views_api() {
  return array(
    'api' => '3.0-alpha1',
  );
}
