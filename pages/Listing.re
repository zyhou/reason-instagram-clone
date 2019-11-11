let user: Card.user = {name: "Maxime", avatar: "http://url.com/avatar"};

let card1: Card.card = {
  id: "uuid1",
  user,
  caption: "https://images.unsplash.com/photo-1572817519612-d8fadd929b00?ixlib=rb-1.2.1&ixid=eyJhcHBfaWQiOjEyMDd9&auto=format&fit=crop&w=1950&q=80",
  created_at: "2019",
};

let card2: Card.card = {
  id: "uuid2",
  user,
  caption: "https://images.unsplash.com/photo-1572817519612-d8fadd929b00?ixlib=rb-1.2.1&ixid=eyJhcHBfaWQiOjEyMDd9&auto=format&fit=crop&w=1950&q=80",
  created_at: "2019",
};

let cards = [card1, card2];

[@react.component]
let make = () => {
  <div
    className="w-full bg-indigo-100 h-screen flex flex-row flex-wrap justify-center ">
    <div
      className="w-full md:w-3/4 lg:w-4/5 p-5 md:px-12 lg:24 h-full antialiased">
      (ReasonReact.array(List.map(card => <Card key={card.id} card />, cards) |> Array.of_list))
    </div>
  </div>;
};

let default = make;
