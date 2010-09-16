<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _sensor_server_node_info() {
  $items = array(
    'sensor' => array(
      'name' => t('Sensor'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'sensor_reading' => array(
      'name' => t('Sensor Reading'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Sensor Reading Name'),
      'has_body' => '1',
      'body_label' => t('Data'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'sensor_server' => array(
      'name' => t('SensorServer'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'sensor_server_data' => array(
      'name' => t('SensorServer Data'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Data'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
