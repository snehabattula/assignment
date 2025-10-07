public void onDrawFrame(GL10 gl) {
    GLES20.glClear(GLES20.GL_COLOR_BUFFER_BIT);
    GLES20.glBindTexture(GLES20.GL_TEXTURE_2D, textureId);
    // Draw the processed frame as texture
}
