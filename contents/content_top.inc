<?php
/**
 * Basic ad injections
 *
 * @package    BardCanvas
 * @subpackage basic_ad_injections
 * @author     Alejandro Caballero - lava.caballero@gmail.com
 */

global $config, $template;

$config->globals["modules:basic_ad_injections.content_top/prevent_rendering"] = false;
$this_module->load_extensions("content_top", "pre_rendering");
if( $config->globals["modules:basic_ad_injections.content_top/prevent_rendering"] ) return;

$key = "modules:basic_ad_injections." . str_replace(".inc", "", basename(__FILE__));

$contents = $settings->get($key);
if( empty($contents) ) return;

$exclussions = $settings->get("{$key}_exclussions");
$page_tag    = $template->get("page_tag");
if( ! empty($exclussions) && ! empty($page_tag) )
{
    $list = preg_split('/,\s+/', $exclussions);
    if( in_array($page_tag, $list) ) return;
}
?>

<!-- Basic ad injections: content top -->

<?= $contents ?>
