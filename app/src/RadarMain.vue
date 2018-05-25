<template>
  <div id="RadarMain">
    <div class="container">
      <div class="row">
         <h2 class="title">Radar-Arduino-Interface</h2>
      </div>
      <div class="row">
       <button type="button" class="btn btn2 btn-info btn-lg" data-toggle="modal" data-target="#myModal">INFO</button>
      </div>
      <div class="row col-xl-12">
        <DistanceDisplay class="col-xl-6"></DistanceDisplay>
        <AngleDisplay class="col-xl-6 ri"></AngleDisplay>
      </div>
    </div>
<div id="myModal" class="modal fade" role="dialog">
  <div class="modal-dialog">
    <div class="modal-content">
      <div>
        <p class="info">Lorem ipsum dolor sit amet, consectetur adipisicing elit. Veritatis ratione molestiae corporis? Blanditiis labore odio voluptate fugit officia, eligendi corporis quas rem ut fugiat itaque debitis asperiores! Quia, suscipit ipsam.</p>
      </div>
        <button type="button" class="btn btn-default" data-dismiss="modal">Close</button>
    </div>
  </div>
</div>
  </div>
</template>

<script>
import AngleDisplay from './components/AngleDisplay'
import DistanceDisplay from './components/DistanceDisplay'

export default {
  name: 'RadarMain',
  components: {
    AngleDisplay,
    DistanceDisplay
  }
}
</script>
<style>
body {
  background-color: #001427;
  color: #FDFFFF;
}
.title {
  font-size: 40px;
  text-align: center;
  margin: 60px;
}
.title, .btn2 {

  margin: 20px auto;
}
.dataview {
  -webkit-transform: rotate(270deg);
  -moz-transform: rotate(270deg);
  -ms-transform: rotate(270deg);
  -o-transform: rotate(270deg);
  transform: rotate(270deg);
  margin: auto;
}

h1, h2 {
  font-weight: 100;
  font-size: 50px;
}

.info {
  color: black;
  text-align: center;
}
</style>
