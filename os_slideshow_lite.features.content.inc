<?php

/**
 * Implementation of hook_content_default_fields().
 */
function os_slideshow_lite_content_default_fields() {
  $fields = array();

  // Exported field: field_slideshow_images
  $fields['slideshow-field_slideshow_images'] = array(
    'field_name' => 'field_slideshow_images',
    'type_name' => 'slideshow',
    'display_settings' => array(
      'weight' => '31',
      'parent' => '',
      'token' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'slideshow_default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'slideshow_default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'slideshow_default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'slideshow_default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'slideshow_default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '1',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => 'Slideshow picture',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Slideshow images',
      'weight' => '-3',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_slideshow_machine_name
  $fields['slideshow-field_slideshow_machine_name'] = array(
    'field_name' => 'field_slideshow_machine_name',
    'type_name' => 'slideshow',
    'display_settings' => array(
      'weight' => '32',
      'parent' => '',
      'token' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '2' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '3' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '32',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => 'homepage',
          '_error_element' => 'default_value_widget][field_slideshow_machine_name][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Machine name',
      'weight' => '-4',
      'description' => 'Short description of this slideshow <strong>containing only letters, numbers, and underscores</strong>.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Machine name');
  t('Slideshow images');

  return $fields;
}
