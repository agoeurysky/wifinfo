# module téléinformation client
# rene-d 2020

FROM python:3-alpine

RUN pip3 install sseclient influxdb click

COPY influx.py /

CMD python3 -u /influx.py
