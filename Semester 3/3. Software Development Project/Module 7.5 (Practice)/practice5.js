// Using fetch
fetch('https://jsonplaceholder.typicode.com/comments')
  .then(response => response.json())
  .then(comments => {
    // Process comments and display on the website
    comments.forEach(comment => {
      const commentElement = document.createElement('div');
      commentElement.innerHTML = `<strong>${comment.name}</strong>: ${comment.body} <button onclick="loadDynamicData(${comment.id})">Load Dynamic Data</button><br>`;
      commentsContainer.appendChild(commentElement);
    });
  })
  .catch(error => console.error('Error fetching data:', error));

function loadDynamicData(commentId) {
    // Use the commentId to construct the dynamic URL
    const dynamicURL = `https://jsonplaceholder.typicode.com/comments/${commentId}`;

    // Fetch data using the dynamic URL
    fetch(dynamicURL)
        .then(response => response.json())
        .then(dynamicData => {
            // Display dynamicData on the website
            console.log(dynamicData);
        })
        .catch(error => console.error('Error fetching dynamic data:', error));
}
