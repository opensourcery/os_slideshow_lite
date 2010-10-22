<?php

/**
 * Implementation of hook_strongarm().
 */
function os_slideshow_lite_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_slideshow';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '0',
    'author' => '1',
    'options' => '-2',
    'menu' => '-1',
    'path' => '2',
    'path_redirect' => '3',
  );

  $export['content_extra_weights_slideshow'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_slideshow';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );

  $export['node_options_slideshow'] = $strongarm;
  return $export;
}
