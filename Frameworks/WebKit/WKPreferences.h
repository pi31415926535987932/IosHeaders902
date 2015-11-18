/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:51:38 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface WKPreferences : NSObject <WKObject> {

	ObjectStorage<WebKit::WebPreferences> _preferences;

}

@property (assign,setter=_setTelephoneNumberDetectionIsEnabled:,nonatomic) char _telephoneNumberDetectionIsEnabled; 
@property (assign,setter=_setStorageBlockingPolicy:,nonatomic) int _storageBlockingPolicy; 
@property (assign,setter=_setCompositingBordersVisible:,nonatomic) char _compositingBordersVisible; 
@property (assign,setter=_setCompositingRepaintCountersVisible:,nonatomic) char _compositingRepaintCountersVisible; 
@property (assign,setter=_setTiledScrollingIndicatorVisible:,nonatomic) char _tiledScrollingIndicatorVisible; 
@property (assign,setter=_setVisibleDebugOverlayRegions:,nonatomic) unsigned _visibleDebugOverlayRegions; 
@property (assign,setter=_setSimpleLineLayoutDebugBordersEnabled:,nonatomic) char _simpleLineLayoutDebugBordersEnabled; 
@property (assign,setter=_setDeveloperExtrasEnabled:,nonatomic) char _developerExtrasEnabled; 
@property (assign,setter=_setLogsPageMessagesToSystemConsoleEnabled:,nonatomic) char _logsPageMessagesToSystemConsoleEnabled; 
@property (assign,setter=_setAllowFileAccessFromFileURLs:,nonatomic) char _allowFileAccessFromFileURLs; 
@property (assign,setter=_setJavaScriptRuntimeFlags:,nonatomic) unsigned _javaScriptRuntimeFlags; 
@property (assign,setter=_setStandalone:,getter=_isStandalone,nonatomic) char _standalone; 
@property (assign,setter=_setDiagnosticLoggingEnabled:,nonatomic) char _diagnosticLoggingEnabled; 
@property (assign,setter=_setAntialiasedFontDilationEnabled:,nonatomic) char _antialiasedFontDilationEnabled; 
@property (assign,setter=_setOfflineApplicationCacheIsEnabled:,nonatomic) char _offlineApplicationCacheIsEnabled; 
@property (assign,setter=_setFullScreenEnabled:,nonatomic) char _fullScreenEnabled; 
@property (assign,nonatomic) float minimumFontSize; 
@property (assign,nonatomic) char javaScriptEnabled; 
@property (assign,nonatomic) char javaScriptCanOpenWindowsAutomatically; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(void)dealloc;
-(id)init;
-(void)setMinimumFontSize:(float)arg1 ;
-(float)minimumFontSize;
-(void)setJavaScriptEnabled:(char)arg1 ;
-(Object*)_apiObject;
-(char)javaScriptEnabled;
-(char)_telephoneNumberDetectionIsEnabled;
-(void)_setTelephoneNumberDetectionIsEnabled:(char)arg1 ;
-(int)_storageBlockingPolicy;
-(void)_setStorageBlockingPolicy:(int)arg1 ;
-(char)_offlineApplicationCacheIsEnabled;
-(char)_fullScreenEnabled;
-(void)_setFullScreenEnabled:(char)arg1 ;
-(char)_compositingBordersVisible;
-(void)_setCompositingBordersVisible:(char)arg1 ;
-(char)_compositingRepaintCountersVisible;
-(void)_setCompositingRepaintCountersVisible:(char)arg1 ;
-(char)_tiledScrollingIndicatorVisible;
-(void)_setTiledScrollingIndicatorVisible:(char)arg1 ;
-(unsigned)_visibleDebugOverlayRegions;
-(void)_setVisibleDebugOverlayRegions:(unsigned)arg1 ;
-(char)_simpleLineLayoutDebugBordersEnabled;
-(void)_setSimpleLineLayoutDebugBordersEnabled:(char)arg1 ;
-(char)_developerExtrasEnabled;
-(void)_setDeveloperExtrasEnabled:(char)arg1 ;
-(char)_logsPageMessagesToSystemConsoleEnabled;
-(void)_setLogsPageMessagesToSystemConsoleEnabled:(char)arg1 ;
-(char)_allowFileAccessFromFileURLs;
-(void)_setAllowFileAccessFromFileURLs:(char)arg1 ;
-(unsigned)_javaScriptRuntimeFlags;
-(void)_setJavaScriptRuntimeFlags:(unsigned)arg1 ;
-(char)_isStandalone;
-(char)_diagnosticLoggingEnabled;
-(void)_setDiagnosticLoggingEnabled:(char)arg1 ;
-(char)_antialiasedFontDilationEnabled;
-(void)_setAntialiasedFontDilationEnabled:(char)arg1 ;
-(void)_setOfflineApplicationCacheIsEnabled:(char)arg1 ;
-(char)javaScriptCanOpenWindowsAutomatically;
-(void)setJavaScriptCanOpenWindowsAutomatically:(char)arg1 ;
-(void)_setStandalone:(char)arg1 ;
@end

