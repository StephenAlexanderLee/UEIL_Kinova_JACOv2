import matlab.engine
eng = matlab.engine.start_matlab()
ret = eng.dummy_vsx(nargout=0)
