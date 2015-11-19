/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusKit/OKProducer.h>

@interface OpusMarimbaProducer : OKProducer {

	unsigned _currentFeederIndex;

}
+(void)setupJavascriptContext:(id)arg1 ;
-(void)_initNavigatorSettings;
-(void)_initTemplates;
-(void)_initCouchPotatoSettings;
-(char)_authorImport:(id)arg1 progressBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(char)_authorFinish:(id)arg1 progressBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(char)_authorProduce:(id)arg1 progressBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(char)_authorCluster:(id)arg1 progressBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(char)_authorBootstrap:(id)arg1 progressBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(char)supportsLiveAuthoring;
-(char)author:(char)arg1 progressBlock:(/*^block*/id)arg2 requiresProducer:(inout char*)arg3 error:(id*)arg4 ;
-(char)liveAuthorInitialBootstrap:(/*^block*/id)arg1 error:(id*)arg2 ;
-(char)needsLiveAuthoring;
-(id)liveAuthorNextChunk:(/*^block*/id)arg1 error:(id*)arg2 ;
-(float)currentLiveAuthoringProgress;
-(unsigned)totalNumberOfLiveAuthoringItems;
-(float)liveAuthoringProgressForMediaItem:(id)arg1 ;
-(void)updateSynopsisGuideline;
-(char)resetLiveAuthoring;
@end
