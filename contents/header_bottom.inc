<?php
/**
 * Basic ad injections
 *
 * @package    BardCanvas
 * @subpackage basic_ad_injections
 * @author     Alejandro Caballero - lava.caballero@gmail.com
 */

global $config;

$config->globals["modules:basic_ad_injections.header_bottom/prevent_rendering"] = false;
$this_module->load_extensions("header_bottom", "pre_rendering");
if( $config->globals["modules:basic_ad_injections.header_bottom/prevent_rendering"] ) return;

$key = "modules:basic_ad_injections."
     . str_replace(".inc", "", basename(__FILE__));
?>

<!-- Basic ad injections: html head -->

<?= $settings->get($key) ?>
