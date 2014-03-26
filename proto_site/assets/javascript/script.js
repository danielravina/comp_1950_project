// Add scroll to here
$(document).ready(function(){
  $("#tabs a").click (function(e){
    e.preventDefault()
    target = e.target.getAttribute('href');
    $(".content-box").scrollTo(target, 1000)
  })
});