<?php
/**
 * Basic ad injections
 *
 * @package    BardCanvas
 * @subpackage basic_ad_injections
 * @author     Alejandro Caballero - lava.caballero@gmail.com
 */

global $config;

if( $_GET["offset"] > 0 ) return;

$config->globals["modules:basic_ad_injections.home_content/prevent_rendering"] = false;
$this_module->load_extensions("home_content", "pre_rendering");
if( $config->globals["modules:basic_ad_injections.home_content/prevent_rendering"] ) return;

$key = "modules:basic_ad_injections."
     . str_replace(".inc", "", basename(__FILE__));

$contents = $settings->get($key);
$contents = autolink_hash_tags($contents, "{$config->full_root_path}/tag/");
$contents = convert_emojis($contents);
?>

<!-- Basic ad injections: home content -->

<div class="basic_ad_injections home_content">
    <?= $contents ?>
</div>
