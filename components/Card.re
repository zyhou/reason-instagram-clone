type user = {
  name: string,
  avatar: string,
};

type card = {
  user,
  caption: string,
  created_at: string,
};

let str = React.string;

[@react.component]
let make = (~card: card) => {
  <div className="mt-3 flex flex-col">
    <div className="bg-white mt-3">
      <img
        className="border rounded-t-lg shadow-lg "
        src={card.caption}
      />
      <div className="bg-white p-1 border shadow flex flex-row flex-wrap">
        <div
          className="w-1/3 hover:bg-gray-200 text-center text-xl text-gray-700 font-semibold">
          {React.string("Like")}
        </div>
        <div
          className="w-1/3 hover:bg-gray-200 border-l-4 border-r- text-center text-xl text-gray-700 font-semibold">
          {React.string("Share")}
        </div>
        <div
          className="w-1/3 hover:bg-gray-200 border-l-4 text-center text-xl text-gray-700 font-semibold">
          {React.string("Comment")}
        </div>
      </div>
      <div
        className="bg-white border-4 bg-gray-300 border-white rounded-b-lg shadow p-5 text-xl text-gray-700 content-center font-semibold flex flex-row flex-wrap">
        <div className="w-full">
          <div className="w-full text-left text-xl text-gray-600">
            {React.string("@Some Perso")}
          </div>
          {React.string(
             "A Pretty Cool photo from the mountains. Image credit to @danielmirlea on Unsplash",
           )}
        </div>
      </div>
    </div>
  </div>;
};
