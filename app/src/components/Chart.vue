<script>
import { Line } from 'vue-chartjs'

export default {
  name: 'Line',
  extends: Line,
  data () {
    return {
      datacollection: {
        labels: [
          'January',
          'February',
          'February',
          'February',
          'February',
          'February'
        ],
        datasets: [
          {
            label: 'Data One',
            backgroundColor: '#f87979',
            data: [40, 200, 34, 65, 76, 87]
          }
        ]
      }
    }
  },
  mounted () {
    this.renderChart(this.datacollection, {
      responsive: true,
      maintainAspectRatio: false
    })
  }
}
</script>

<style scoped>
.DataView {
  border: 1px solid black;
  border-radius: 1%;
}
.graph {
  height: 600px;
  width: 100%;
}
</style>
