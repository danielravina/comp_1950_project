<meta charset="UTF-8">
<title>Thenet.ca :: COMP1950 SITE</title>
<script src="//ajax.googleapis.com/ajax/libs/jquery/1.11.0/jquery.min.js"></script>

<script src="assets/javascript/scrollTo.js"></script>
<script src="assets/javascript/script.js"></script>
<link rel="stylesheet" href="assets/fonts/webfontkit-20140127-152607/stylesheet.css">
<link rel="stylesheet" href="assets/css/normalize.css">
<link rel="stylesheet" href="assets/css/foundation.min.css">
<link rel="stylesheet" href="assets/css/style.css">
<link rel="stylesheet" href="assets/css/mediaqueries.css">

 <meta name="viewport" content="width=device-width" />

    <!-- Onclick Nav -->
  <script>
    $(document).ready(function(){
      var windowWidth = $(window).width();
        if(windowWidth < 1025){
          $("#menu-button").click(function(){
          $("nav#main").slideToggle(800);
        });     
      }
    });
  </script>
