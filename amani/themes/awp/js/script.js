/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - https://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {


// To understand behaviors, see https://drupal.org/node/756722#behaviors
Drupal.behaviors.my_custom_behavior = {
  attach: function(context, settings) {

    // Place your code here.

      //Rewrite slogna into header region
      $('.header__region .header_links .site--slogan').append($('.header__name-and-slogan'));

      $('.header__region .header_links .search_link .link-icon').click(function(){
          $('.header__region .header_links .search_link #search-block-form').show();
      });
      $('.header__region .header_links .search_link #search-block-form .form-text').focusout(function() {
          $('.header__region .header_links .search_link #search-block-form').hide();
      });


  }
};


})(jQuery, Drupal, this, this.document);
