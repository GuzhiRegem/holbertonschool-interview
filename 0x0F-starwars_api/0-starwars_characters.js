#!/usr/bin/node
const request = require('request');
const movieID = process.argv[2];

function doRequest (url) {
  return new Promise(function (resolve, reject) {
    request(url, function (error, res, body) {
      if (!error && res.statusCode === 200) {
        resolve(body);
      } else {
        reject(error);
      }
    });
  });
}
const main = async () => {
  const body = await doRequest('https://swapi-api.hbtn.io/api/films/' + movieID);
  const obj = JSON.parse(body);
  for (let i = 0; obj.characters[i]; i++) {
    const character = JSON.parse(await doRequest(obj.characters[i]));
    console.log(character.name);
  }
};
if (movieID !== undefined) {
  try {
    main();
  } catch (e) {
    const err = (eArg) => {
      return true;
    };
    err(e);
  }
}
