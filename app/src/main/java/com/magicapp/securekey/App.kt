package com.magicapp.securekey

import android.app.Application
import android.util.Log

class App : Application() {

    init {
        System.loadLibrary("keys")
    }

    external fun getPublicAppKey(): String?
    external fun getPrivateAppKey(): String?

    override fun onCreate() {
        super.onCreate()
        Log.d("TAG", "getPublicAppKey: ${getPublicAppKey()}")
        Log.d("TAG", "getPrivateAppKey: ${getPrivateAppKey()}")
    }



}