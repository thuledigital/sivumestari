<?php
/**
 * @file
 * sivumestari_wysiwyg_4.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function sivumestari_wysiwyg_4_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: wysiwyg
  $profiles['wysiwyg'] = array(
    'format' => 'wysiwyg',
    'editor' => 'ckeditor',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 0,
      'theme' => 'advanced',
      'language' => 'fi',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Strike' => 1,
          'JustifyLeft' => 1,
          'JustifyCenter' => 1,
          'JustifyRight' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Outdent' => 1,
          'Indent' => 1,
          'Undo' => 1,
          'Redo' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Image' => 1,
          'Source' => 1,
          'PasteText' => 1,
          'RemoveFormat' => 1,
          'SpecialChar' => 1,
          'Format' => 1,
          'FontSize' => 1,
          'Table' => 1,
        ),
        'imce' => array(
          'imce' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 1,
      'apply_source_formatting' => 0,
      'paste_auto_cleanup_on_paste' => 1,
      'block_formats' => 'p,address,h2,h3,h4,h5,h6',
      'css_setting' => 'theme',
      'css_path' => '',
      'css_classes' => '',
    ),
  );

  return $profiles;
}
