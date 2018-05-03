<template>
  <div id="RadarMain">
    <div class="container-fluid">
      <div class="row col-xl-12 title">
        <h1 class="col-xl-12 text-center">Arduino-Radar Interface</h1>
      </div>
      <div class="row col-xl-12  ">
        <Data-view class="col-xl-8  rouded"></Data-view>
        <div class="col-xl-4 ">
          <div class="row">
            <Angle-display class="col-xl-12 angle-display"></Angle-display>
          </div>
        </div>
      </div>
     </div>
     <random-chart></random-chart>
  </div>
</template>

<script>
import DataView from './components/DataView'
import AngleDisplay from './components/AngleDisplay'
import React from './components/React'
import randomChart from './components/randomChart'

export default {
  name: 'RadarMain',
  components: {
    DataView,
    AngleDisplay,
    React,
    randomChart
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
.title {
padding-bottom: 150px;
}
.bord{
  border: 4px solid #028090;
  border-radius: 5px;
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
