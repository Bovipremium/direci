<!DOCTYPE html>
<html lang="pt-BR">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Redirecionando para WhatsApp...</title>

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
  fbq('init', '1210572513490047'); 
  fbq('track', 'PageView');
  </script>
  <noscript>
    <img height="1" width="1" style="display:none"
         src="https://www.facebook.com/tr?id=1210572513490047&ev=PageView&noscript=1"/>
  </noscript>
  <!-- End Meta Pixel Code -->

  <script>
    document.addEventListener("DOMContentLoaded", function() {
      const phone = "5562993463712";  // <- Número do WhatsApp
      const msg = "Olá, gostaria de saber mais informações!!"; // <- Mensagem padrão
      const encodedMsg = encodeURIComponent(msg);
      const appLink = `whatsapp://send?phone=${phone}&text=${encodedMsg}`;

      // dispara evento Contact
      fbq('track', 'Contact'); 

      // redireciona para WhatsApp
      window.location.href = appLink;
    });
  </script>
</head>
<body>
  <p>Redirecionando para o WhatsApp...</p>
</body>
</html>
