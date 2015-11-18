/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:56 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class NSThread;

@interface SBBuddyWiFiScanner : NSObject {

	WiFiManagerClientRef _wifiManager;
	WiFiDeviceClientRef _wifiDevice;
	char _scanningComplete;
	NSThread* _scanningThread;
	/*^block*/id _completionHandler;

}

@property (retain) NSThread * scanningThread;                                              //@synthesize scanningThread=_scanningThread - In the implementation block
@property (copy) id completionHandler;                                                     //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,getter=isScanningComplete,nonatomic) char scanningComplete;              //@synthesize scanningComplete=_scanningComplete - In the implementation block
-(void)beginScanningWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_thread_closeWifiConnection;
-(void)_wifiScanningThread;
-(void)setScanningThread:(NSThread *)arg1 ;
-(void)_thread_callCompletionHandlerWithGuessedCountries:(id)arg1 ;
-(char)isScanningComplete;
-(void)setScanningComplete:(char)arg1 ;
-(NSThread *)scanningThread;
-(void)_thread_cancelScanning;
-(void)_thread_wifiScanComplete:(CFArrayRef)arg1 error:(char)arg2 ;
-(void)cancel;
-(void)dealloc;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
@end

