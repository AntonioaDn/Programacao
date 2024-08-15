$(document).ready(function() {
    $('#mobile_btn').on('click', function() {
        $('#mobile_menu').toggleClass('active')
        $('#mobile_btn').find('i').toggleClass('fa-x')
    });
});

const btn_insta = document.querySelector('#insta') 
btn_insta.addEventListener('click', () => {
    window.open('https://www.instagram.com/pibtibirill/','_blank')
})

const btn_youtube = document.querySelector('#youtube') 
btn_youtube.addEventListener('click', () => {
    window.open('https://www.youtube.com/c/pibtibirill','_blank')
})

const btn_facebook = document.querySelector('#facebook') 
btn_facebook.addEventListener('click', () => {
    window.open('https://www.facebook.com/pibtibirill','_blank')
})

const copia_pix = document.querySelector('#btn_pix')
copia_pix.addEventListener('click', () => {
    navigator.clipboard.writeText('05786139000126').then(() => {
        alert('Pix copiado para a área de transferência!')
    }).catch((err) => {
        console.log('Erro ao copiar.', err)
    })

})