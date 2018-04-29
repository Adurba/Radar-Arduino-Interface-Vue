<template>
  <div id="RadarMain">
    <div class="container-fluid">
      <div class="row col-xl-12">
        <h1 class="col-xl-12 text-center">Arduino-Radar Interface</h1>
      </div>
      <div class="row col-xl-12">
        <Data-view class="col-xl-8"></Data-view>
        <div class="col-xl-4">
          <div class="row angle-display">
            <Angle-display class="col-xl-12" ></Angle-display> 
          </div>
          <div class="row distance-display">
           <Distance-display class="col-xl-12"></Distance-display>
          </div>
        </div>
      </div>
     </div>
  </div>
      
</template>

<script>
import DataView from "./components/DataView";
import AngleDisplay from "./components/AngleDisplay";
import DistanceDisplay from "./components/DistanceDisplay";

export default {
  name: "RadarMain",
  components: {
    DataView,
    AngleDisplay,
    DistanceDisplay
  }
};
</script>
<style>
h1 {
  margin-top: 50px;
  display: block;
}
.distance-display {
  position: absolute;
  left: 25%;
}

.angle-display {
  position: absolute;
  left: 25%;
  bottom: 0;
}
</style>
