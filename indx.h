<!DOCTYPE html>
<html lang="pt-BR">
<head>
  <meta charset="UTF-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0" />
  <title>Abrindo WhatsApp...</title>

  <!-- Meta Pixel Code -->
  <script>
    !function(f,b,e,v,n,t,s)
    {if(f.fbq)return;n=f.fbq=function(){n.callMethod?
    n.callMethod.apply(n,arguments):n.queue.push(arguments)};
    if(!f._fbq)f._fbq=n;n.push=n;n.loaded=!0;n.version='2.0';
    n.queue=[];t=b.createElement(e);t.async=!0;
    t.src=v;s=b.getElementsByTagName(e)[0];
    s.parentNode.insertBefore(t,s)}(window, document,'script',
    'https://connect.facebook.net/en_US/fbevents.js');
    fbq('init', '1499908808113042'); 
    fbq('track', 'PageView');
  </script>
  <noscript>
    <img height="1" width="1" style="display:none"
      src="https://www.facebook.com/tr?id=1499908808113042&ev=PageView&noscript=1"/>
  </noscript>
  <!-- End Meta Pixel Code -->

  <script>
    document.addEventListener("DOMContentLoaded", function() {
      const phone = "5562993463712";
      const msg = "Olá, gostaria de saber mais informações!!";
      const encodedMsg = encodeURIComponent(msg);

      // link direto para o WhatsApp
      const appLink = `whatsapp://send?phone=${phone}&text=${encodedMsg}`;
      
      // Dispara evento Lead no Pixel antes de redirecionar
      if (typeof fbq !== 'undefined') {
        fbq('track', 'Lead', {content_name: 'WhatsApp Redirect'});
      }

      // Redireciona em 500ms (tempo para o Pixel registrar)
      setTimeout(() => {
        window.location.href = appLink;
      }, 500);
    });
  </script>
</head>
<body>
  <p>Abrindo WhatsApp...</p>
</body>
</html>
