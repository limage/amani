<?php
/**
 * @file
 * amani_front_page.features.uuid_bean.inc
 */

/**
 * Implements hook_uuid_features_default_beans().
 */
function amani_front_page_uuid_features_default_beans() {
  $beans = array();

  $beans[] = array(
    'label' => 'Front page second sidebar bottom',
    'description' => NULL,
    'title' => '',
    'type' => 'static_content',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'front-page-second-sidebar-bottom',
    'view_mode' => 'default',
    'created' => '1374820014',
    'log' => '',
    'uid' => '1',
    'default_revision' => '1',
    'revisions' => array(),
    'vuuid' => '62a67080-249f-421b-887c-f28aa34c2d11',
    'uuid' => 'df136016-8ba9-42c2-aaad-a9ed1eb57b86',
    'field_bean_body' => array(
      'und' => array(
        0 => array(
          'value' => '<?php echo l(t(variable_get(\'amani_administrator_newsletter_title\', \'Newsletter\')), variable_get(\'amani_administrator_newsletter_link\', \'\'), array(\'attributes\' => array(\'class\' => \'button\', \'target\' => \'_blank\'))); ?>',
          'format' => 'php_code',
        ),
      ),
    ),
    'metatags' => array(),
  );
  return $beans;
}
