/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:30:28 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@interface MKQuadTrie : NSObject {

	unsigned _maxItems;
	SCD_Struct_MK1 _minSize;
	SCD_Struct_MK2 _initialRegion;
	void* __root;

}
-(char)remove:(id)arg1 ;
-(void)foreach:(/*^block*/id)arg1 ;
-(id)initWithInitialRegion:(SCD_Struct_MK2)arg1 minimumSize:(SCD_Struct_MK1)arg2 maximumItems:(unsigned)arg3 ;
-(id)itemsInMapRect:(SCD_Struct_MK2)arg1 ;
-(id)itemDescriptions;
-(id)_itemsInMapRect:(SCD_Struct_MK2)arg1 ;
-(id)itemsPassingRectTest:(/*^block*/id)arg1 coordinateTest:(/*^block*/id)arg2 ;
-(id)breadthFirstDescription;
-(id)depthFirstDescription;
-(void)clearAllItemsPerforming:(/*^block*/id)arg1 ;
-(void)insert:(id)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(id)description;
-(char)contains:(id)arg1 ;
-(id)allItems;
@end

