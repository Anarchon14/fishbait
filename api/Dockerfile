FROM ubuntu:24.04

RUN apt-get update && \
    apt-get install -y python3 pipx && \
    rm -rf /var/lib/apt/lists/* && \
    pipx install poetry

ENV PATH=/root/.local/bin:$PATH

WORKDIR /api

COPY pyproject.toml poetry.lock poetry.toml ./
RUN poetry install --without dev

COPY ./entrypoints ./entrypoints
RUN chmod +x ./entrypoints/*
