<?php

/**
 * Implementation of hook_content_default_fields().
 */
function sensor_server_content_default_fields() {
  module_load_include('inc', 'sensor_server', 'sensor_server.defaults');
  $args = func_get_args();
  return call_user_func_array('_sensor_server_content_default_fields', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function sensor_server_ctools_plugin_api() {
  module_load_include('inc', 'sensor_server', 'sensor_server.defaults');
  $args = func_get_args();
  return call_user_func_array('_sensor_server_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_node_info().
 */
function sensor_server_node_info() {
  module_load_include('inc', 'sensor_server', 'sensor_server.features.node');
  $args = func_get_args();
  return call_user_func_array('_sensor_server_node_info', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function sensor_server_strongarm() {
  module_load_include('inc', 'sensor_server', 'sensor_server.defaults');
  $args = func_get_args();
  return call_user_func_array('_sensor_server_strongarm', $args);
}
