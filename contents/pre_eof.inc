<?php
/**
 * Basic ad injections
 *
 * @package    BardCanvas
 * @subpackage basic_ad_injections
 * @author     Alejandro Caballero - lava.caballero@gmail.com
 */

global $config;

$config->globals["modules:basic_ad_injections.pre_eof/prevent_rendering"] = false;
$this_module->load_extensions("pre_eof", "pre_rendering");
if( $config->globals["modules:basic_ad_injections.pre_eof/prevent_rendering"] ) return;

$key = "modules:basic_ad_injections." . str_replace(".inc", "", basename(__FILE__));

$contents = $settings->get($key);
if( empty($contents) ) return;
?>

<!-- Basic ad injections: pre footer -->

<?= $contents ?>
