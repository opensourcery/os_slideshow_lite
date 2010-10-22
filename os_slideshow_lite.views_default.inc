<?php

/**
 * Implementation of hook_views_default_views().
 */
function os_slideshow_lite_views_default_views() {
  $views = array();

  // Exported view: os_slideshow_lite
  $view = new view;
  $view->name = 'os_slideshow_lite';
  $view->description = 'Minimalist slideshow view';
  $view->tag = 'OS Slideshow';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 3.0-alpha1;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  
/* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['timeout'] = '4000';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['speed'] = '800';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['fixed_height'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['random'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['pause'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['pause_on_click'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['pause_when_hidden'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['remember_slide'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['controls'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['pager'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['pager_type'] = 'Numbered';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['pager_hover'] = '2';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['image_count'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['nowrap'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_singleframe']['sync'] = '1';
  $handler->display->display_options['style_options']['mode'] = 'views_slideshow_singleframe';
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_slideshow_images_fid' => array(
      'element_type' => '',
      'class' => '',
      'prefix' => '',
      'suffix' => '',
    ),
  );
  /* Field: Content: Slideshow images (field_slideshow_images) */
  $handler->display->display_options['fields']['field_slideshow_images_fid']['id'] = 'field_slideshow_images_fid';
  $handler->display->display_options['fields']['field_slideshow_images_fid']['table'] = 'node_data_field_slideshow_images';
  $handler->display->display_options['fields']['field_slideshow_images_fid']['field'] = 'field_slideshow_images_fid';
  $handler->display->display_options['fields']['field_slideshow_images_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slideshow_images_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slideshow_images_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_slideshow_images_fid']['format'] = 'slideshow_default';
  $handler->display->display_options['fields']['field_slideshow_images_fid']['multiple']['group'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images_fid']['multiple']['multiple_reversed'] = 0;
  /* Argument: Node: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['validate_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'slideshow' => 'slideshow',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = 0;
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter: Node: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'slideshow' => 'slideshow',
  );
  
/* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'slideshow/%';

  $views[$view->name] = $view;

  return $views;
}
