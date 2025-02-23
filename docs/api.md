# Rest Api Doc

## get all price from cache

Retrieve all the median price pairs of all komodo ecosystem coins

**URL**: `/api/v1/getallprice`

**Method**: `GET`

**Auth required**: No

**Permissions required**: None

**Prerequisites**: Program should be launched since atleast one minute (cache filling)

### Success Response

**Code**: `200 OK`

**Content examples**

```json
[
  {
    "RFOX": [
      {
        "RFOX/VRSC": "0.27409349"
      },
      {
        "RFOX/KMD": "0.03270390"
      },
      {
        "RFOX/DOGE": "9.38900572"
      },
      {
        "RFOX/BAT": "0.13624038"
      },
      {
        "RFOX/RVN": "0.73872477"
      },
      {
        "RFOX/ZILLA": "0.22130490"
      },
      {
        "RFOX/QTUM": "0.00992935"
      },
      {
        "RFOX/BTC": "0.00000243"
      },
      {
        "RFOX/LTC": "0.00033437"
      },
      {
        "RFOX/DASH": "0.00027411"
      },
      {
        "RFOX/DGB": "2.76478635"
      },
      {
        "RFOX/USDC": "0.02472535"
      },
      {
        "RFOX/ETH": "0.00013283"
      },
      {
        "RFOX/BCH": "0.00008210"
      }
    ]
  },
  {
    "VRSC": [
      {
        "VRSC/RFOX": "3.64839017"
      },
      {
        "VRSC/KMD": "0.11931659"
      },
      {
        "VRSC/DOGE": "34.25475619"
      },
      {
        "VRSC/BAT": "0.49705808"
      },
      {
        "VRSC/RVN": "2.69515619"
      },
      {
        "VRSC/ZILLA": "0.80740661"
      },
      {
        "VRSC/QTUM": "0.03622615"
      },
      {
        "VRSC/BTC": "0.00000888"
      },
      {
        "VRSC/LTC": "0.00121990"
      },
      {
        "VRSC/DASH": "0.00100008"
      },
      {
        "VRSC/DGB": "10.08701934"
      },
      {
        "VRSC/USDC": "0.09020775"
      },
      {
        "VRSC/ETH": "0.00048465"
      },
      {
        "VRSC/BCH": "0.00029954"
      }
    ]
  },
  {
    "KMD": [
      {
        "KMD/RFOX": "30.57739281"
      },
      {
        "KMD/VRSC": "8.38106435"
      },
      {
        "KMD/DOGE": "287.09131590"
      },
      {
        "KMD/BAT": "4.16587578"
      },
      {
        "KMD/RVN": "22.58827747"
      },
      {
        "KMD/ZILLA": "6.76692679"
      },
      {
        "KMD/QTUM": "0.30361373"
      },
      {
        "KMD/BTC": "0.00007441"
      },
      {
        "KMD/LTC": "0.01022409"
      },
      {
        "KMD/DASH": "0.00838172"
      },
      {
        "KMD/DGB": "84.53995820"
      },
      {
        "KMD/USDC": "0.75603698"
      },
      {
        "KMD/ETH": "0.00406189"
      },
      {
        "KMD/BCH": "0.00251046"
      }
    ]
  }
]
```

### Error response

200 + `null` in the body

## get price with an base currency and quote currency

Retrieves the median of the price of a base / quote currency pair

**URL**: `/api/v1/getprice?base_currency=:currency&quote_currency=:quote_currency`

**Method**: `GET`

**Auth required**: No

**Permissions required**: None

### Success Response

**Code**: `200 OK`

**Content examples**

```json
{
"price":"0.00007494"
}
```

### Error Response

**Code**: `400 Bad request` (Ill-formed request)

**Code**: `422 Unprocessable Entity` (Wrong Argument)

**Code**: `500 Internal Server Error` (Unexistent Base or Quote, throw pair not available)

## mm2 get orderbook with an base currency and quote currency

Retrieves the order book for the given asset pair

**URL**: `/api/v1/legacy/mm2/getorderbook?base_currency=:currency&quote_currency=:quote_currency`

**Method**: `GET`

**Auth required**: No

**Permissions required**: None

**Prerequisites**: `:currency and :quote_currency` should be enabled through `electrum` or `enable` rpc call.

### Success Response

**Code**: `200 OK`

**Content examples**

```json
{
  "askdepth": 0,
  "asks": [
    {
      "address": "RTpwruinq4GLbkGZg8NrJw5YPWUvMWnHYR",
      "age": 10,
      "avevolume": 0,
      "coin": "RICK",
      "depth": 0,
      "maxvolume": 969.8307168,
      "numutxos": 0,
      "price": 2,
      "pubkey": "9727ffa665389a4fed0a2b75687d1a7ad23a430f0aa06dfbf9edb9b972da7808",
      "zcredits": 0
    },
    {
      "address": "RT9MpMyucqXiX8bZLimXBnrrn2ofmdGNKd",
      "age": 3,
      "avevolume": 0,
      "coin": "RICK",
      "depth": 0,
      "maxvolume": 989.7500182,
      "numutxos": 0,
      "price": 2,
      "pubkey": "1bb83b58ec130e28e0a6d5d2acf2eb01b0d3f1670e021d47d31db8a858219da8",
      "zcredits": 0
    }
  ],
  "base": "RICK",
  "biddepth": 0,
  "bids": [
    {
      "address": "RTpwruinq4GLbkGZg8NrJw5YPWUvMWnHYR",
      "age": 10,
      "avevolume": 0,
      "coin": "MORTY",
      "depth": 0,
      "maxvolume": 963.1034758799999,
      "numutxos": 0,
      "price": 0.5,
      "pubkey": "9727ffa665389a4fed0a2b75687d1a7ad23a430f0aa06dfbf9edb9b972da7808",
      "zcredits": 0
    },
    {
      "address": "RT9MpMyucqXiX8bZLimXBnrrn2ofmdGNKd",
      "age": 4,
      "avevolume": 0,
      "coin": "MORTY",
      "depth": 0,
      "maxvolume": 973.91801759,
      "numutxos": 0,
      "price": 0.5,
      "pubkey": "1bb83b58ec130e28e0a6d5d2acf2eb01b0d3f1670e021d47d31db8a858219da8",
      "zcredits": 0
    }
  ],
  "netid": 0,
  "numasks": 2,
  "numbids": 2,
  "rel": "MORTY",
  "timestamp": 1565975342
}
```

### Error Response

**Code**: `400 Bad request` (Ill-formed request)

**Code**: `422 Unprocessable Entity` (Wrong Argument)

**Code**: `500 Internal Server Error` (Unexistent Base or Quote, Or `mm2` return 500 error code + message)

## mm2 get balance from a specific currency

Retrieve the balance of the given currency

**URL**: `/api/v1/legacy/mm2/my_balance?currency=:coin`

**Method**: `GET`

**Auth required**: No

**Permissions required**: None

**Prerequisites**: `:coin` should be enabled through `electrum` or `enable` rpc call.

### Success Response

**Code**: `200 OK`

**Content examples**

```json
{
  "address":"RRGKTckWwrZWq73vNekoLxqCJLHS4UKTyk",
  "balance":"0",
  "coin":"RICK"
}
```

### Error Response

**Code**: `400 Bad request` (Ill-formed request)

**Code**: `422 Unprocessable Entity` (Wrong Argument)

**Code**: `500 Internal Server Error` (Unexistent currency, Or `mm2` return 500 error code + message)

## mm2 get version

Retrieve the version of mm2

**URL**: `/api/v1/legacy/mm2/version`

**Method**: `GET`

**Auth required**: No

**Permissions required**: None


### Success Response

**Code**: `200 OK`

**Content examples**

```json
{
  "result":"2.0.1009_mm2_b08da3aa9_Darwin"
}
```

## mm2 setprice

The setprice method places an order on the orderbook, and it relies on this node acting as a maker, also called a Bob node.

**URL**: `/api/v1/legacy/mm2/setprice`

**Method**: `POST`

**Auth required**: No

**Permissions required**: None

### Success Response

**Code** `200 OK`

**Content examples (request)**

```json
{
  "base": "RICK",
  "method": "setprice",
  "price": "1",
  "rel": "MORTY",
  "userpass": "YOUR_PASSWORD_HERE",
  "volume": "1"
}
```

**Content example (answer)**

```json
{
  "result": {
    "base": "RICK",
    "created_at": 1566505487524,
    "matches": {},
    "max_base_vol": "1",
    "min_base_vol": "0",
    "price": "1",
    "rel": "MORTY",
    "started_swaps": [],
    "uuid": "de05f451-d665-45c6-9526-112446644621"
  }
}
```

### Error Response

**Code**: `400 Bad request` (Ill-formed request)

**Code**: `500 Internal Server Error` (`mm2` return 500 error code + message)

## mm2 cancel_order

The `cancel_order` cancels the active order created by the MM2 node.

**URL**: `/api/v1/legacy/mm2/cancel_order`

**Method**: `POST`

**Auth required**: No

**Permissions required**: None

### Success Response

**Code** `200 OK`

**Content examples (request)**

```json
{
  "method": "cancel_order",
  "userpass": "YOUR_PASSWORD_HERE",
  "uuid": "de05f451-d665-45c6-9526-112446644621"
}
```

**Content example (answer)**

```json
{
  "result": "success"
}
```

### Error Response

**Code**: `400 Bad request` (Ill-formed request)

**Code**: `500 Internal Server Error` (`mm2` return 500 error code + message)

## mm2 buy

The buy method issues a buy request and attempts to match an order from the orderbook based on the provided arguments.

**URL**: `/api/v1/legacy/mm2/buy`

**Method**: `POST`

**Auth required**: No

**Permissions required**: None

### Success Response

**Code** `200 OK`

**Content examples (request)**

```json
{
  "base": "RICK",
  "method": "buy",
  "price": "1",
  "rel": "MORTY",
  "userpass": "YOUR_PASSWORD_HERE",
  "volume": "1"
}
```

**Content example (answer)**

```json
{
  "result": {
    "action": "Buy",
    "base": "RICK",
    "base_amount": "1",
    "dest_pub_key": "0000000000000000000000000000000000000000000000000000000000000000",
    "method": "request",
    "rel": "MORTY",
    "rel_amount": "1",
    "sender_pubkey": "9df6d7fa49c31959fce388bb8e8065fd3d9ace5bc4bbafd0cbd4c6604492670a",
    "uuid": "89001dbe-cec6-4be0-a030-f48e8bab2d96"
  }
}
```

### Error Response

**Code**: `400 Bad request` (Ill-formed request)

**Code**: `500 Internal Server Error` (`mm2` return 500 error code + message)

## mm2 cancel_all_orders

The cancel_all_orders cancels the active orders created by the MM2 node by specified condition.

**URL**: `/api/v1/legacy/mm2/cancel_all_orders`

**Method**: `POST`

**Auth required**: No

**Permissions required**: None

### Success Response

**Code** `200 OK`

**Content examples (request)**

```json
{
  "cancel_by": {
    "type": "All"
  },
  "method": "cancel_all_orders",
  "userpass": "YOUR_PASSWORD_HERE"
}
```

**Content example (answer)**

```json
{
  "result": {
    "cancelled": [
      "25366927-d48b-4aca-b950-f81c40c36c83"
    ],
    "currently_matching": []
  }
}
```

### Error Response

**Code**: `400 Bad request` (Ill-formed request)

**Code**: `500 Internal Server Error` (`mm2` return 500 error code + message)