//
//  ParallaxCollectionViewFlowLayout.h
//  ParallaxCollectionViewFlowLayout
//
//  Created by Bram Yeh on 1/13/14.
//  Copyright (c) 2014 Bram Yeh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ParallaxCollectionViewFlowLayout : UICollectionViewFlowLayout

@property (nonatomic, assign) BOOL allCellParallax;

- (void)enableParallaxCellsAtIndexPaths:(NSArray *)indexPaths;

@end
