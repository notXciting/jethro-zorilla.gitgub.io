const hamburger = document.querySelector('.header .nav-bar .nav-list .hamburger');
const mobile_menu = document.querySelector('.header .nav-bar .nav-list ul');
const menu_item = document.querySelectorAll('.header .nav-bar .nav-list ul li a');
const header = document.querySelector('.header.container');

hamburger.addEventListener('click', () => {
	hamburger.classList.toggle('active');
	mobile_menu.classList.toggle('active');
});

document.addEventListener('scroll', () => {
	var scroll_position = window.scrollY;
	if (scroll_position > 250) {
		header.style.backgroundColor = '#29323c';
	} else {
		header.style.backgroundColor = 'transparent';
	}
});

menu_item.forEach((item) => {
	item.addEventListener('click', () => {
		hamburger.classList.toggle('active');
		mobile_menu.classList.toggle('active');
	});
});

// Email
function validate() {
  let name = document.querySelector('.name');
  let email = document.querySelector('.email');
  let msg = document.querySelector('.message');
  let sendBtn = document.querySelector('.send-btn');

  sendBtn.addEventListener('click', (e) => {
    e.preventDefault();
    if (name.value == "" || email.value == "" || msg.value == "") {
      emptyerror();
    } else{
      sendmail (name.value, email.value, msg.value);
      success();
    }
  });
}
validate();

function sendmail(name,email,msg) {
  emailjs.send("service_h56altl","template_in5ygxk",{
  from_name: email,
  to_name: name,
  message: msg,
  });
}

function emptyerror() {
  swal({
    title: "Oh No...",
    text: "Fields cannot be empty!",
    icon: "error",
  })
}
function success() {
  swal({
    title: "Email sent successfully!",
    text: "I'll try to reply in within 24 hours.",
    icon: "success",
  })
}