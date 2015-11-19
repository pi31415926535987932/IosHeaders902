/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKWidgetNode.h>
#import <libobjc.A.dylib/OKViewControllerAudioSupport.h>

@class NSURL, AVPlayer, AVPlayerLayer, OKAudioDucker, NSString, SCNPlane, SCNMaterialProperty;

@interface OKWidgetMediaNode : OKWidgetNode <OKViewControllerAudioSupport> {

	NSURL* _videoURL;
	AVPlayer* _videoPlayer;
	AVPlayerLayer* _videoPlayerLayer;
	char _autoplay;
	char _loop;
	char _shouldPlayVideoWhenAvailable;
	float _rate;
	float _seekToTime;
	OKAudioDucker* _audioDucker;
	float _requiredDuckLevel;
	float _audioVolume;
	NSString* _audioTrackID;
	NSURL* _mediaURL;
	int _contentMode;
	SCNPlane* _mediaHolder;
	char _loadRessourceNeeded;
	SCNMaterialProperty* _diffuse;
	float _lastResolution;
	SCNVector3 _visionVector;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)seekToTime:(double)arg1 ;
-(double)currentTime;
-(void)setVideoURL:(id)arg1 ;
-(void)dealloc;
-(double)duration;
-(id)valueForUndefinedKey:(id)arg1 ;
-(char)prepareForDisplay;
-(id)initWithWidget:(id)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(int)settingContentMode;
-(void)setSettingContentMode:(int)arg1 ;
-(void)setSettingAutoplay:(char)arg1 ;
-(char)settingLoop;
-(void)setSettingLoop:(char)arg1 ;
-(void)applyLayoutSettings;
-(char)prepareForWarmup;
-(char)prepareForUnload;
-(void)prepareForRefresh;
-(void)setSettingHeight:(float)arg1 ;
-(void)_cancelThumbnailOperations:(id)arg1 ;
-(void)_reloadThumbnailContent;
-(void)loadRessourcesIfNeeded;
-(CGSize)calculateBestResolutionForMediaNode;
-(SCNVector3)calculateAspectFill:(id)arg1 ;
-(void)reloadMediaURL:(id)arg1 size:(CGSize)arg2 lowQuality:(char)arg3 highQuality:(char)arg4 identifier:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)_reloadThumbnailContent:(char)arg1 ;
-(void)resetVideo;
-(void)playerItemDidReachEnd:(id)arg1 ;
-(void)playVideo:(id)arg1 ;
-(void)pauseVideo:(id)arg1 ;
-(void)beginDuckingToLevel:(double)arg1 fadeDuration:(double)arg2 ;
-(void)endDucking;
-(void)beginFadingWithDuration:(double)arg1 ;
-(double)requiredDuckLevel;
-(void)setPlaybackAudioVolume:(float)arg1 ;
-(id)settingUrl;
-(void)setSettingUrl:(id)arg1 ;
-(char)settingsAutoplay;
-(void)setSettingWidth:(float)arg1 ;
-(float)settingRate;
-(void)setSettingRate:(float)arg1 ;
-(float)settingSeekToTime;
-(void)setSettingSeekToTime:(float)arg1 ;
-(void)setSettingAudioRequiredDuckLevel:(float)arg1 ;
-(float)settingAudioVolume;
-(void)setSettingAudioVolume:(float)arg1 ;
-(void)unloadRessources;
-(SCNVector3)visionVector;
@end

