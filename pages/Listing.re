let user: Card.user ={ name: "Maxime", avatar: "http://url.com/avatar"};

let card: Card.card = {
  user,
  caption: "http://url.com/avatar",
  created_at: "2019",
};

[@react.component]
let make = () => {
  <div
    className="w-full bg-indigo-100 h-screen flex flex-row flex-wrap justify-center ">
    <div
      className="w-full md:w-3/4 lg:w-4/5 p-5 md:px-12 lg:24 h-full antialiased">
      <Card card />
    </div>
  </div>;
};

let default = make;
