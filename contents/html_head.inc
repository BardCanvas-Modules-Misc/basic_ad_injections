<?php
/**
 * Basic ad injections
 *
 * @package    BardCanvas
 * @subpackage basic_ad_injections
 * @author     Alejandro Caballero - lava.caballero@gmail.com
 */

global $config;

$config->globals["modules:basic_ad_injections.html_head/prevent_rendering"] = false;
$this_module->load_extensions("html_head", "pre_rendering");
if( $config->globals["modules:basic_ad_injections.html_head/prevent_rendering"] ) return;

$key = "modules:basic_ad_injections."
     . str_replace(".inc", "", basename(__FILE__));
?>

<!-- Basic ad injections: html head -->

<?= $settings->get($key) ?>
