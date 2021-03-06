<?php
/**
 * @file
 * amani_activity.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function amani_activity_user_default_permissions() {
  $permissions = array();

  // Exported permission: create activity content.
  $permissions['create activity content'] = array(
    'name' => 'create activity content',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'contributor',
      3 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any activity content.
  $permissions['delete any activity content'] = array(
    'name' => 'delete any activity content',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own activity content.
  $permissions['delete own activity content'] = array(
    'name' => 'delete own activity content',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'contributor',
      3 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any activity content.
  $permissions['edit any activity content'] = array(
    'name' => 'edit any activity content',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own activity content.
  $permissions['edit own activity content'] = array(
    'name' => 'edit own activity content',
    'roles' => array(
      0 => 'administrator',
      1 => 'amani administrator',
      2 => 'contributor',
      3 => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
