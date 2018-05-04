<template>
  <div id="RadarMain">
    <div class="container-fluid">
      <div class="row col-xl-12 title">
        <h1 class="col-xl-12 text-center">Arduino-Radar Interface</h1>
      </div>
      <div class="row col-xl-12  ">
        <React class="col-xl-8"></React>
        <div class="col-xl-4 ">
          <div class="row">
            <ReactD class="col-xl-12 angle-display"></ReactD>
          </div>
        </div>
      </div>
     </div>
  </div>
</template>

<script>
import React from './components/React'
import ReactD from './components/ReactD'

export default {
  name: 'RadarMain',
  components: {
    React,
    ReactD
  }
}
</script>
<style>
body {
  background-color: #001427;
  color: #FDFFFF;
}
h1 {
  margin-top: 50px;
  display: block;
}
@media screen and (max-width:1200px) {
  .angle-display {
    display: none;
  }
}
@media screen and (max-width:550px) {
  .title {
    padding-bottom:50px;
  }
}
</style>
