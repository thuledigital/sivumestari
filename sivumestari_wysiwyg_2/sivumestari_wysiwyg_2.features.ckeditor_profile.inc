<?php
/**
 * @file
 * sivumestari_wysiwyg_2.features.ckeditor_profile.inc
 */

/**
 * Implements hook_ckeditor_profile_defaults().
 */
function sivumestari_wysiwyg_2_ckeditor_profile_defaults() {
  $data = array(
    'Full' => array(
      'name' => 'Full',
      'settings' => array(
        'ss' => '2',
        'default' => 't',
        'show_toggle' => 'f',
        'skin' => 'kama',
        'uicolor' => 'default',
        'uicolor_textarea' => '<p>
	Click the <strong>UI Color Picker</strong> button to set your color preferences.</p>
',
        'uicolor_user' => 'default',
        'toolbar' => '[
    [\'Cut\',\'Copy\',\'Paste\',\'Undo\',\'Redo\'],
    [\'Image\',\'Table\',\'HorizontalRule\',\'SpecialChar\',\'RemoveFormat\',\'Source\',\'PasteText\'],
    [\'Link\',\'Unlink\',\'linkit\',\'MediaEmbed\'],
    \'/\',
    [\'Bold\',\'Italic\',\'Strike\',\'NumberedList\',\'BulletedList\',\'JustifyLeft\',\'JustifyCenter\',\'JustifyRight\',\'Outdent\',\'Indent\'],
    [\'Superscript\',\'Subscript\'],
    [\'Font\',\'Format\',\'FontSize\',\'TextColor\']
]',
        'expand' => 't',
        'width' => '100%',
        'lang' => 'fi',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;div;pre;address;h1;h2;h3;h4;h5;h6',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'none',
        'css_path' => '',
        'css_style' => 'theme',
        'styles_path' => '',
        'filebrowser' => 'none',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'ckeditor_load_method' => 'ckeditor.js',
        'ckeditor_load_time_out' => '0',
        'forcePasteAsPlainText' => 't',
        'html_entities' => 'f',
        'scayt_autoStartup' => 'f',
        'theme_config_js' => 'f',
        'js_conf' => '',
        'loadPlugins' => array(
          'media' => array(
            'name' => 'media',
            'desc' => 'Plugin for inserting images from Drupal media module',
            'path' => '%base_path%%plugin_dir%media/',
            'buttons' => array(
              'Media' => array(
                'label' => 'Media',
                'icon' => 'images/icon.gif',
              ),
            ),
            'default' => 'f',
          ),
          'mediaembed' => array(
            'name' => 'mediaembed',
            'desc' => 'Plugin for inserting Drupal embeded media',
            'path' => '%base_path%%plugin_dir%mediaembed/',
            'buttons' => array(
              'MediaEmbed' => array(
                'label' => 'MediaEmbed',
                'icon' => 'images/icon.png',
              ),
            ),
            'default' => 'f',
          ),
          'tableresize' => array(
            'name' => 'tableresize',
            'desc' => 'Table Resize plugin',
            'path' => '%base_path%%editor_path%plugins/tableresize/',
            'buttons' => FALSE,
            'default' => 't',
          ),
          'video_filter' => array(
            'name' => 'video_filter',
            'desc' => 'Plugin for inserting video tags with video_filter',
            'path' => '%base_path%%plugin_dir%video_filter/',
            'buttons' => array(
              'video_filter' => array(
                'label' => 'video_filter',
                'icon' => 'video_filter.png',
              ),
            ),
            'default' => 'f',
          ),
        ),
      ),
      'input_formats' => array(
        'full_html' => 'Full HTML',
      ),
    ),
  );
  return $data;
}