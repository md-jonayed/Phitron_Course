// Using fetch
fetch('https://jsonplaceholder.typicode.com/comments')
  .then(response => response.json())
  .then(data => console.log(data))
  .catch(error => console.error('Error fetching data:', error));

// Using axios (if you have axios installed)
// আপনি চাইলে npm install axios কমান্ড দিয়ে axios ইনস্টল করতে পারেন
/*
axios.get('https://jsonplaceholder.typicode.com/comments')
  .then(response => console.log(response.data))
  .catch(error => console.error('Error fetching data:', error));
*/
