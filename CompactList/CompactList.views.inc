<?php

/**
 * Implements hook_views_plugins().
 */
function SidebarList_views_plugins() {
  $plugins = array(
    'module' => 'CompactList',
    'style' => array(
      'CompactList' => array(
        'title' => 'CompactList',
        'help' => '',
        'handler' => 'views_plugin_style',
        'theme' => 'CompactList',
        'uses fields' => FALSE,
        'uses row plugin' => TRUE,
        'uses options' => TRUE,
        'uses grouping' => TRUE,
        'type' => 'normal',
        'even empty' => TRUE,
      ),
    ),
  );

  return $plugins;
}
