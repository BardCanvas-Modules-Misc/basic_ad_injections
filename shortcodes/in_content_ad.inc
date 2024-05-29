<?php
/**
 * Handler for in_content_ad shortcode
 *
 * @package    BardCanvas
 * @subpackage basic_ad_injections
 * @author     Alejandro Caballero - lava.caballero@gmail.com
 * 
 * Trailing globals:
 * @var module[] $modules
 * @var module   $current_module Topmost module
 * @var module   $this_module    Self
 * @var config   $config
 * @var settings $settings
 * @var account  $account
 * 
 * Trailing vars:
 * @var array    $matches
 * @var string   $matched_str
 * @var string   $contents
 * @var array    $attributes
 */

use hng2_base\account;
use hng2_base\config;
use hng2_base\module;
use hng2_base\settings;

global $settings;
$return = $settings->get("modules:basic_ad_injections.in_content");
if( empty($return) ) return;

$contents = str_replace($matched_str, $return, $contents);
