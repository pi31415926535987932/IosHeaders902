/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusKit/OKProducerBundle.h>

@class NSArray, OKProducerContent;

@interface OKProducerPlugin : OKProducerBundle {

	Class _producerClass;
	int _loadCounter;
	NSArray* _loadedClasses;
	OKProducerContent* _content;

}

@property (nonatomic,retain) OKProducerContent * content;              //@synthesize content=_content - In the implementation block
-(id)audioURLs;
-(id)backgroundColor;
-(void)dealloc;
-(id)init;
-(id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(id)localizedName;
-(id)initWithURL:(id)arg1 ;
-(OKProducerContent *)content;
-(char)isLoaded;
-(char)_load;
-(unsigned)family;
-(id)URLForResource:(id)arg1 withExtension:(id)arg2 ;
-(void)setContent:(OKProducerContent *)arg1 ;
-(void)setupJavascriptContext:(id)arg1 ;
-(id)exportedClassNames;
-(id)contentIdentifier;
-(char)hasLoadedClass:(Class)arg1 ;
-(double)minimumContentVersion;
-(id)producerWithPresentation:(id)arg1 ;
-(char)loadRetain;
-(void)unloadRelease;
-(void)_bundleDidLoad:(id)arg1 ;
-(void)_unload;
-(id)supportedResolutions;
-(char)hasExportedClass:(Class)arg1 ;
@end

