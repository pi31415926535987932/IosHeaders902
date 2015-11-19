/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:45 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NRDevice, NSCache;

@interface PBBridgeWatchAttributeController : NSObject {

	unsigned _edition;
	int _material;
	unsigned _internalSize;
	int _hardwareBehavior;
	NRDevice* _device;
	NSCache* _stringCache;

}

@property (nonatomic,readonly) unsigned edition;                   //@synthesize edition=_edition - In the implementation block
@property (nonatomic,readonly) int material;                       //@synthesize material=_material - In the implementation block
@property (nonatomic,readonly) unsigned internalSize;              //@synthesize internalSize=_internalSize - In the implementation block
@property (nonatomic,readonly) unsigned size; 
@property (nonatomic,readonly) int hardwareBehavior;               //@synthesize hardwareBehavior=_hardwareBehavior - In the implementation block
@property (nonatomic,retain) NRDevice * device;                    //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) NSCache * stringCache;                //@synthesize stringCache=_stringCache - In the implementation block
+(id)sharedDeviceController;
+(id)materialDescription:(int)arg1 ;
+(id)sizeDescription:(unsigned)arg1 ;
+(id)editionDescription:(unsigned)arg1 ;
+(id)hwBehaviorDescription:(int)arg1 ;
+(id)materialKeyColorForMaterial:(int)arg1 ;
+(id)resourceString:(id)arg1 material:(int)arg2 size:(unsigned)arg3 forAttributes:(unsigned)arg4 ;
+(char)testZeusMaterial;
-(id)resourceString:(id)arg1 forAttributes:(unsigned)arg2 ;
-(unsigned)size;
-(id)init;
-(NRDevice *)device;
-(unsigned)edition;
-(void)setMaterial:(int)arg1 ;
-(int)material;
-(id)getGestaltDmin;
-(void)_populateMaterialDetailsWithDMinProperities:(id)arg1 ;
-(id)attributesDescription;
-(id)materialKeyColor;
-(void)setInternalSize:(unsigned)arg1 ;
-(unsigned)internalSize;
-(int)hardwareBehavior;
-(NSCache *)stringCache;
-(void)setStringCache:(NSCache *)arg1 ;
-(void)setDevice:(NRDevice *)arg1 ;
@end

